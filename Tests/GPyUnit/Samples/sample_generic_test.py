import unittest
import win32com.client
import win32ui
import pythoncom
import os

#####################################################
# class TestCaseX: contains the tests as methods
#####################################################
class TestCaseX( unittest.TestCase ):
        """TestCaseX class
        """
                
        """if you override __init__ method, call the base class's __init__ method:
        def __init__(self, methodName='runTest'):
                unittest.TestCase.__init__(self, methodName)
        """

        def setUp(self):
            """hook method, will be called before every test method
            put here the code you think is setup-like
            """
            
            # boolean class member indicating whether the setUp has been executed:
            self.inited = True
            
            # setting up a dictionary:
            self.mydict = { 'one':1, 'two':2, 'three':3}

        def tearDown(self ):
            """hook method, will be called after each test method
            put here the common 'destructing' code if needed
            (however destructing explicitly is needed only for 
            resources like files, databases)
            """

            # just to show class member accessibility:
            self.inited = False

        def runTest():
            """you may list here a sequence of test method invokations
            """
            testA()
            testB()

        def testA( self ):
            """DESCRIPTION: testing with assert, failIf, failUnless
            the initial value of mydict
            """
            
            # test if setUp really has been run
            self.failUnless( self.inited)
            
            assert self.mydict['one'] + 1 == self.mydict['two']
            self.failUnless( self.mydict['three'] - self.mydict['two'] == self.mydict['one'], 'Error in dictionary setup')
            self.failIf( self.mydict['three'] == self.mydict['two'])
            
            pass

        def testB( self ):
            """DESCRIPTION: modifying mydict and sum up the values
            """

            self.failUnless( self.inited)

            self.mydict['four'] = 4
            self.failUnless( self.mydict['four'] == 2 * self.mydict['two'])

            
            sum = 0
            for one_key in self.mydict.keys():
            	sum += self.mydict[one_key]
            
            assert sum == 10
            
            pass

#####################################################
# 1st option to produce testsuites
#####################################################
def suites():
    """A method named 'suites' is needed if you'd like to execute the tests with GPyunit.py
    Produces a test suite, gathering all methods in the class specified, matching the pattern specified:
    """
    suite = unittest.makeSuite(TestCaseX,'test')
    return suite

#####################################################
# 2nd option to produce testsuites
#####################################################
def suites2():
    """Produces a test suite, adding methods one by one:
    """
    suite = unittest.TestSuite()
    suite.addTest( TestCaseX( "testA"))
    suite.addTest( TestCaseX( "testB"))
    return suite

#####################################################
# main
#####################################################
if __name__ == "__main__":
    """If this file is run standalone, execute the suite given back by the suites() function above
    """

    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TEST BEGINS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    
    ######## 1st option
    all = suites()
    runner = unittest.TextTestRunner()
    runner.run( all )

    ######## 2nd option
    #unittest.main(defaultTest='TestCaseX')
    
    ######## 3rd option
    #unittest.main()