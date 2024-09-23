#pragma once
#include <Windows.h>
#include <iostream>
#include <UnityResolve.hpp>
using namespace std;
using I = UnityResolve;
using IM = UnityResolve::Method;
using IC = UnityResolve::Class;
using IT = UnityResolve::Type;
using IF = UnityResolve::Field;
using IA = UnityResolve::Assembly;
using II = UnityResolve::UnityType;
void CreateConsole() {
    AllocConsole();
    SetConsoleTitleA("Unity3DIL2CppDumper by RiritoXXL");
    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);
}

DWORD WINAPI Main() {
    CreateConsole();
    I::Init(GetModuleHandleA("GameAssembly.dll"), I::Mode::Il2Cpp); //Initializating IL2Cpp Runtime :D
    I::DumpToFile("C:\\dump\\dumped.txt");
    return TRUE;
}