// Fig. 5.18: LogicalOperators.java
// Logical operators.

public class LogicalOperators 
{
   public static void main( String[] args )
   {
      // create truth table for && (conditional AND) operator
      System.out.printf( "%s\n%s: %b\n%s: %b\n%s: %b\n%s: %b\n\n",
         "Conditional AND (&&)", "false && false", ( false && false ),
         "false && true", ( false && true ), 
         "true && false", ( true && false ),
         "true && true", ( true && true ) );

      // create truth table for || (conditional OR) operator
      System.out.printf( "%s\n%s: %b\n%s: %b\n%s: %b\n%s: %b\n\n",
         "Conditional OR (||)", "false || false", ( false || false ),
         "false || true", ( false || true ),
         "true || false", ( true || false ),
         "true || true", ( true || true ) );

      // create truth table for & (boolean logical AND) operator
      System.out.printf( "%s\n%s: %b\n%s: %b\n%s: %b\n%s: %b\n\n",
         "Boolean logical AND (&)", "false & false", ( false & false ),
         "false & true", ( false & true ),
         "true & false", ( true & false ),
         "true & true", ( true & true ) );

      // create truth table for | (boolean logical inclusive OR) operator
      System.out.printf( "%s\n%s: %b\n%s: %b\n%s: %b\n%s: %b\n\n",
         "Boolean logical inclusive OR (|)",
         "false | false", ( false | false ),
         "false | true", ( false | true ),
         "true | false", ( true | false ),
         "true | true", ( true | true ) );

      // create truth table for ^ (boolean logical exclusive OR) operator
      System.out.printf( "%s\n%s: %b\n%s: %b\n%s: %b\n%s: %b\n\n",
         "Boolean logical exclusive OR (^)", 
         "false ^ false", ( false ^ false ),
         "false ^ true", ( false ^ true ),
         "true ^ false", ( true ^ false ),
         "true ^ true", ( true ^ true ) );

      // create truth table for ! (logical negation) operator
      System.out.printf( "%s\n%s: %b\n%s: %b\n", "Logical NOT (!)",
         "!false", ( !false ), "!true", ( !true ) );
   } // end main
} // end class LogicalOperators
