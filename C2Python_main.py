import sys
from translate import Translator


def main():
    translator = Translator()
    in_file = input("请输入输入文件路径: ")
    out_file = '.'.join(in_file.split('.')[:-1]) + '.py'
    translator.translate(in_file, out_file)


if __name__ == '__main__':
    main()
