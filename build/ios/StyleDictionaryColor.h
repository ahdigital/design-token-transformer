
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Thu, 15 Sep 2022 08:52:13 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorColorBrandOrange,
ColorColorBrandBlue,
ColorColorBrandGreen,
ColorColorBrandOchre
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
