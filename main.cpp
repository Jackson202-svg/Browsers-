#include "include/cef_app.h"
#include "include/cef_browser.h"
#include "include/cef_command_line.h"

int main(int argc, char* argv[]) {
    CefMainArgs main_args(argc, argv);

    CEF_REQUIRE_PROCESS();

    CefSettings settings;
    settings.no_sandbox = true;

    CefInitialize(main_args, settings, nullptr, nullptr);

    CefWindowInfo window_info;
    window_info.SetAsPopup(NULL, "My Chromium Browser");

    CefBrowserSettings browser_settings;

    CefBrowserHost::CreateBrowser(
        window_info,
        nullptr,
        "https://google.com",
        browser_settings,
        nullptr,
        nullptr);

    CefRunMessageLoop();
    CefShutdown();
    return 0;
}
