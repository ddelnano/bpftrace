#pragma once

#include "ast/pass_manager.h"
#include "ast/visitors.h"
#include "bpftrace.h"
#include "config.h"

namespace bpftrace {
namespace ast {

class NodeCounter : public Visitor {
public:
  void Visit(Node &node) override
  {
    count_++;
    Visitor::Visit(node);
  }

  size_t get_count()
  {
    return count_;
  };

private:
  size_t count_ = 0;
};

Pass CreateCounterPass();

} // namespace ast
} // namespace bpftrace
