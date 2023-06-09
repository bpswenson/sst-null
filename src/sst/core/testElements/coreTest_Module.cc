// Copyright 2009-2023 NTESS. Under the terms
// of Contract DE-NA0003525 with NTESS, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2023, NTESS
// All rights reserved.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.

#include "sst_config.h"

#include "sst/core/testElements/coreTest_Module.h"


using namespace SST::CoreTestModule;

CoreTestModuleExample::CoreTestModuleExample(SST::Params& params)
{
    modName = params.find<std::string>("modulename", "");
}

void
CoreTestModuleExample::printName()
{
    printf("Name: %s\n", modName.c_str());
}
