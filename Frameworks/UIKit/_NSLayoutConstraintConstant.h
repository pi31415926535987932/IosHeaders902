/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying> {

	NSString* _symbolicValue;
	float _numericValue;

}

@property (nonatomic,copy,readonly) NSString * symbolicValue;              //@synthesize symbolicValue=_symbolicValue - In the implementation block
@property (nonatomic,readonly) float numericValue;                         //@synthesize numericValue=_numericValue - In the implementation block
+(id)constantWithSymbolicValue:(id)arg1 numericValue:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSymbolicValue:(id)arg1 numericValue:(float)arg2 ;
-(NSString *)symbolicValue;
-(float)numericValue;
@end

