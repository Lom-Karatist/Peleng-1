import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Window 2.0
import QtQuick.Layouts 1.1

Window
{
    signal calcMeth(int methNumber)
    signal rangeChanged(int range);
    function processPercent()
    {
        console.log("YES");
    }

    width: 230
    height: 200
    visible: true
    flags: Qt.Dialog
    title: "спектральные расстояния"

    ColumnLayout {

        id: rowLayout1
        anchors.fill: parent

        Text {
            Layout.fillHeight: true
            Layout.fillWidth: true
            id: text1
            text: qsTr("Выбор метода")
            font.pixelSize:  22
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }

        ComboBox {
            id: method_box
            Layout.fillHeight: true
            Layout.fillWidth: true
            width: 161
            height: 20
            activeFocusOnPress: true

            model: ListModel{
                ListElement {text: "Евклидово расстояние";}
                ListElement {text: "Спектральный Угол"}
                ListElement {text: "Спектральная корреляция"}
            }
        }


        Label {
            id: label1
            Layout.fillHeight: true
            Layout.fillWidth: true
            x: 381
            y: 41
            text: qsTr("Схожесть спектров \n") + sliderHorizontal1.value + qsTr(" - 100%")
            style: Text.Normal
            font.italic: false
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 22
        }

        Slider {
            Layout.fillHeight: true
            Layout.fillWidth: true
            value: 10
            id: sliderHorizontal1
            stepSize: 1
            maximumValue: 100
            onValueChanged: {
                rangeChanged(value)
            }

            //on
        }



        Button {
            Layout.fillHeight: true
            Layout.fillWidth: true
            id: button1
            text: qsTr("Рассчитать")
            onClicked: {
                //callMethod(method_box.currentIndex);
                calcMeth(method_box.currentIndex);
            }
        }

    }

}
