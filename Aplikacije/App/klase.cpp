#include "klase.hpp"

Computer::Computer() : gCard(""), os("")
{
    hddGB = 0;
    ramGB = 0;
}

Computer::Computer(double hddGB, double ramGB, char* gCard, char* os) : gCard(gCard), os(os)
{
    (*this).hddGB = hddGB;
    (*this).ramGB = ramGB;
}

Computer::Computer(const Computer& x) : gCard(x.gCard), os(x.os)
{
    hddGB = x.hddGB;
    ramGB = x.ramGB;
}

ostream& operator<<(ostream& out, const Computer& x)
{
    out << "Computer : \n Hard-drive space : " << x.hddGB << " GB \n Ram memory required : " << x.ramGB << " GB \n Graphics Card : " << x.gCard << " \n Operating System : " << x.os << endl;
    return out;
}

Application::Application() : language(""), author(COMPANY_NAME)
{
    sizeMB = 0;
}

Application::Application(char* language, double sizeMB) : language(language), author(COMPANY_NAME)
{
    (*this).sizeMB = sizeMB;
}

Application::Application(const Application& x)
{
    language = x.language;
    sizeMB = x.sizeMB;
    author = x.author;
}

ostream& operator<<(ostream& out, const Application& x)
{
    out << "Application : \n Written in : " << x.language << " \n Size in megabytes : " << x.sizeMB << " MB \n Author : " << x.author << endl;
    return out;
}

AndroidApp::AndroidApp() : Application("Java", 0)
{
    minVersion = 0;
    targetVersion = 0;
}

AndroidApp::AndroidApp(double minVersion, double targetVersion, double sizeMB) : Application("Java", sizeMB)
{
    (*this).minVersion = minVersion;
    (*this).targetVersion = targetVersion;
}

AndroidApp::AndroidApp(const AndroidApp& x) : Application((Application)x)
{
    minVersion = x.minVersion;
    targetVersion = x.targetVersion;
}

ostream& operator<<(ostream& out, const AndroidApp& x)
{
    out << "AndroidApp : \n " << (Application)x << "\n minVersion : " << x.minVersion << "\n targetVersion : " << x.targetVersion << endl;
    return out;
}

DesktopApp::DesktopApp() : Application("Java",0), minSysReq(), optimumSysReq() {}

DesktopApp::DesktopApp(const Computer& minSysReq, const Computer& optimumSysReq, char* language, double sizeMB) : Application(language, sizeMB), minSysReq(minSysReq), optimumSysReq(optimumSysReq) {}

DesktopApp::DesktopApp(const DesktopApp& x) : Application((Application)x), minSysReq(x.minSysReq), optimumSysReq(x.optimumSysReq) {}

ostream& operator<<(ostream& out, const DesktopApp& x)
{
    out << "DesktopApp : \n" << (Application)x << "\n minSysReq : " << x.minSysReq << "\n optimumSysReq : " << x.optimumSysReq << endl;
    return out;
}
