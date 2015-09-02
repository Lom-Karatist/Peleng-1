#include "Context.h"

#include "Exception.h"
#include "Util.h"
std::string Context::MakeDefaultErrorDescription()
{
	return u::a2u("���������� ������");
}

std::string Context::MakeCreateErrorDescription()
{
	return u::a2u("�������� �� ������");
}

const u::uint32 Context::SuccessErrorCode = 0;
const u::uint32 Context::DefaultErrorCode = (u::uint32)-1;
const std::string Context::DefaultErrorDescription = Context::MakeDefaultErrorDescription();
const std::string Context::CreateErrorDescription = Context::MakeCreateErrorDescription();

Context::Context()
	: m_errorCode(SuccessErrorCode)
{
	m_filesOper = new FilesOperation();
}

Context::~Context()
{
	delete m_filesOper;
}

FilesOperation* Context::GetFilesOperObject() const
{
	return m_filesOper;
}

void Context::ClearError()
{
	m_errorCode = SuccessErrorCode;
	m_errorDescription.clear();
}

void Context::SetError(const std::exception& ex)
{
	const Exception* filesErr = dynamic_cast<const Exception*>(&ex);
	if (filesErr != 0)
	{
		SetError(filesErr->GetDescription(), filesErr->GetCode());
	}
	else
	{
		SetError(ex.what() != 0 ? ex.what() : "");
	}
}

void Context::SetError(std::string description, u::uint32 code)
{
	m_errorCode = (code != SuccessErrorCode ? code : DefaultErrorCode);
	m_errorDescription = (!description.empty() ? u::a2u(description) : DefaultErrorDescription);
}

u::uint32 Context::GetErrorCode() const
{
	return m_errorCode;
}

const std::string& Context::GetErrorDescription() const
{
	return m_errorDescription;
}
