""" 抽象语法树定义
语法树中所有的非终结符将对应 ASTInternalNode 类型对象
语法树中所有的终结符将对应 ASTExternalNode 类型对象
"""


# 抽象语法树 结点基类
class ASTNode:
    def __init__(self, key):
        self.key = str(key)


# 抽象语法树 内部结点类
# self.key {String}  符号类型
# self.children {List of ASTInternalNode or ASTExternalNode}  子结点列表
class ASTInternalNode(ASTNode):
    def __init__(self, key, children):
        ASTNode.__init__(self, key)
        self.children = children
        for i in range(len(self.children)):
            if not isinstance(self.children[i], ASTNode):
                self.children[i] = ASTExternalNode(str(self.children[i]), str(self.children[i]))

    def to_yaml_dict(self):
        yaml_dict = {'key': self.key, 'children': []}
        for child in self.children:
            yaml_dict['children'].append(child.to_yaml_dict())
        return yaml_dict

    def __str__(self):
        return ' '.join(map(str, self.children))


# 抽象语法树 外部结点类
# self.key {String}  符号类型
# self.value {String}  终结符-值
class ASTExternalNode(ASTNode):
    def __init__(self, key, value):
        ASTNode.__init__(self, key)
        self.value = str(value)

    def to_yaml_dict(self):
        return {'key': self.key, 'value': self.value}

    def __str__(self):
        return self.value




