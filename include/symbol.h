
#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>
#include <vector>

struct Ast;

struct symtable_entry {
  std::string Name;
  int SymbolType;
  Ast *ast;
};

struct symtable {
  std::vector<symtable_entry> symbols;

  int GetIndex(std::string Name);
  symtable_entry *Insert(std::string Name, int Type);
  symtable_entry *Lookup(std::string Name);
  symtable_entry *FindFirstOfType(int T);

  symtable();
};

#endif
