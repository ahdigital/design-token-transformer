
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 14 Sep 2022 14:53:18 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBrandOrange,
ColorBrandBlue,
ColorBrandGreen,
ColorBrandOchre
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
