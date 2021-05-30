#empty PyQT5 GUI template

import sys
from PyQt5.QtWidgets import QApplication, QWidget

# main function
if __name__ == "__main__":
    app = QApplication(sys.argv)
    w = QWidget()
    w.resize(300,300)
    w.setWindowTitle('This is an empty template.')
    w.show()
    sys.exit(app.exec_())
