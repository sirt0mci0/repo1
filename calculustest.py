import unittest
import calculus as c

class CalcTest(unittest.TestCase):
    
    def test_add(self):
        self.assertEqual(c.add(1,2),3)

    def test_div(self):
        self.assertEqual(c.div(3.0,2.0),1.5)

    def test_bad_add(self):
        self.assertEqual(c.bad_add(1,2),3)

if __name__ == '__main__':
    unittest.main()
