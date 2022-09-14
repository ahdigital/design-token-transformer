
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 14 Sep 2022 10:51:41 GMT


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
