/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIDictationPhrase : NSObject {

	NSString* _text;
	NSArray* _alternativeInterpretations;

}

@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeInterpretations;              //@synthesize alternativeInterpretations=_alternativeInterpretations - In the implementation block
+(id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)text;
-(id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(NSArray *)alternativeInterpretations;
@end

