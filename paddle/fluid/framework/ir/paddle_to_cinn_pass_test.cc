/* Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#include "paddle/fluid/framework/ir/paddle_to_cinn_pass.h"

#include "gtest/gtest.h"

#include "paddle/fluid/framework/ir/graph.h"
#include "paddle/fluid/framework/program_desc.h"

namespace paddle {
namespace framework {
namespace ir {

TEST(PaddleToCinnPassTest, TodoTest) {
  ProgramDesc program;
  Graph graph(program);

  auto pass = paddle::framework::ir::PassRegistry::Instance().Get(
      "paddle_to_cinn_pass");

  pass->Apply(&graph);
}

}  // namespace ir
}  // namespace framework
}  // namespace paddle

USE_PASS(paddle_to_cinn_pass);
