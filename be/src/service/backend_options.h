// Copyright (c) 2017, Baidu.com, Inc. All Rights Reserved

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#ifndef BDG_PALO_BE_SERVICE_BACKEND_OPTIONS_H
#define BDG_PALO_BE_SERVICE_BACKEND_OPTIONS_H

#include <string>
#include <gutil/macros.h>

namespace palo {

class BackendOptions {
public:
    static void init();
    static std::string get_localhost();
private:
    static std::string _localhost;

    DISALLOW_COPY_AND_ASSIGN(BackendOptions);
};

}

#endif //BDG_PALO_BE_SERVICE_BACKEND_OPTIONS_H
