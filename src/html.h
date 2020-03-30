#include <Arduino.h>
String getHtmlString() {
    return R"~~~(
        <!DOCTYPE html>
        <html>
        <body>
        <h1>Hello world</h1>
        </body>
        </html>
    )~~~";
    ;
}