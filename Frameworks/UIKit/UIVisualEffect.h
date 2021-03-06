/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIVisualEffectConfig, _UIBackdropViewSettings;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding> {

	_UIVisualEffectConfig* _effectConfig;
	_UIBackdropViewSettings* _effectSettings;

}

@property (nonatomic,readonly) _UIVisualEffectConfig * effectConfig;                  //@synthesize effectConfig=_effectConfig - In the implementation block
@property (nonatomic,readonly) _UIBackdropViewSettings * effectSettings;              //@synthesize effectSettings=_effectSettings - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)effectConfigForQuality:(int)arg1 ;
-(id)effectForUserInterfaceStyle:(int)arg1 ;
-(_UIVisualEffectConfig *)effectConfig;
-(_UIBackdropViewSettings *)effectSettings;
@end

