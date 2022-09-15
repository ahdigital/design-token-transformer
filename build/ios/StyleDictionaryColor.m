
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Thu, 15 Sep 2022 08:52:13 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:0.961f green:0.353f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:0.173f green:0.580f blue:0.745f alpha:1.000f],
[UIColor colorWithRed:0.231f green:0.620f blue:0.529f alpha:1.000f],
[UIColor colorWithRed:0.878f green:0.682f blue:0.133f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
