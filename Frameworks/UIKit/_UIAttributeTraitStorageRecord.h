/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection;

@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	id _value;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) id value;                                         //@synthesize value=_value - In the implementation block
-(UITraitCollection *)traitCollection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)value;
-(id)initWithTraitCollection:(id)arg1 value:(id)arg2 ;
@end

