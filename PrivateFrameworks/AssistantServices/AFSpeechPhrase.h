/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {

	char _isLowConfidence;
	NSArray* _interpretations;

}

@property (nonatomic,copy) NSArray * interpretations;              //@synthesize interpretations=_interpretations - In the implementation block
@property (assign,nonatomic) char isLowConfidence;                 //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSArray *)interpretations;
-(id)bestInterpretation;
-(char)isLowConfidence;
-(void)setIsLowConfidence:(char)arg1 ;
-(void)setInterpretations:(NSArray *)arg1 ;
@end

