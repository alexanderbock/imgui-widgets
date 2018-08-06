/*****************************************************************************************
 *                                                                                       *
 * Custom ImGui-Widgets                                                                  *
 *                                                                                       *
 * Copyright (c) 2018                                                                    *
 * Alexander Bock                                                                        *
 * mail@alexanderbock.eu                                                                 *
 *                                                                                       *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this  *
 * software and associated documentation files (the "Software"), to deal in the Software *
 * without restriction, including without limitation the rights to use, copy, modify,    *
 * merge, publish, distribute, sublicense, and/or sell copies of the Software, and to    *
 * permit persons to whom the Software is furnished to do so, subject to the following   *
 * conditions:                                                                           *
 *                                                                                       *
 * The above copyright notice and this permission notice shall be included in all copies *
 * or substantial portions of the Software.                                              *
 *                                                                                       *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,   *
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A         *
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT    *
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF  *
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE  *
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                                         *
 ****************************************************************************************/

#ifndef ___CUSTOM__IMGUI__WIDGETS__H___
#define ___CUSTOM__IMGUI__WIDGETS__H___

#include <string>

namespace imgui_widgets {

struct FileBrowserResult {
    std::string selected_path;
  
    bool is_file_selected;
    bool is_directory_selected;
};

struct FileInformation {
    std::string file_name;
    bool is_file = false;
    bool is_directory = false;
};

FileBrowserResult FileBrowser(std::vector<FileInformation> files);

} // namespace imgui_widgets

#include "file_browser.inl"

#endif // ___CUSTOM__IMGUI__WIDGETS__H___
