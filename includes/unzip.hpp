#ifndef _UNZIP_HPP_
#define _UNZIP_HPP_

void fnc_clean_logo(char *atmo_logo_folder, char *hekate_nologo_file_path);
void fnc_clean_theme();
void fnc_clean_modules();
void clean_sd(bool clean_theme, bool clean_modules);
int unzip(const char *output, char *subfolder_in_zip);

#endif