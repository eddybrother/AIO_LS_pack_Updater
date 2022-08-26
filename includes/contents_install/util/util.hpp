#pragma once
#include <filesystem>

namespace inst::util {
    void initApp ();
    void deinitApp ();
    void initInstallServices();
    void deinitInstallServices();
    bool ignoreCaseCompare(const std::string &a, const std::string &b);
    std::vector<std::filesystem::path> getDirectoryFiles(const std::string & dir, const std::vector<std::string> & extensions);
    std::vector<std::filesystem::path> getDirsAtPath(const std::string & dir);
    bool removeDirectory(std::string dir);
    bool copyFile(std::string inFile, std::string outFile);
    std::string shortenString(std::string ourString, int ourLength, bool isFile);
    std::string readTextFromFile(std::string ourFile);
    std::string softwareKeyboard(std::string guideText, std::string initialText, int LenMax);
    std::vector<uint32_t> setClockSpeed(int deviceToClock, uint32_t clockSpeed);
    std::string getIPAddress();
    std::string* getBatteryCharge();
    std::vector<std::pair<u64, u32>> listInstalledTitles();
    bool isTitleInstalled(std::string filename, const std::vector<std::pair<u64, u32>> &installedTitles);
}