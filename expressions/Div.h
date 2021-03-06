//
// Created by noam on 03/01/2020.
//

#ifndef EX3_EXPRESSIONS_DIV_H_
#define EX3_EXPRESSIONS_DIV_H_

#include "BinaryOperator.h"

class Div : public BinaryOperator {
 public:
  Div(Expression *le, Expression *re)
      : BinaryOperator(le, re) {}
  double calculate() override;
};

#endif //EX3_EXPRESSIONS_DIV_H_
