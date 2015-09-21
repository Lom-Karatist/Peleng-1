#include "ChannelPluginAttributes.h"

ChannelPluginAttributes::ChannelPluginAttributes(u::uint32 channel)
    :m_channel(channel)
{

}

ChannelPluginAttributes::~ChannelPluginAttributes()
{

}

u::uint32 ChannelPluginAttributes::GetChannel() const
{
    return m_channel;
}
