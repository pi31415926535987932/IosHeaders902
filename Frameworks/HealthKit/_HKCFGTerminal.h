/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression
+(id)terminalMatchingString:(id)arg1 ;
+(id)terminalMatchingString:(id)arg1 caseSensitive:(char)arg2 ;
+(id)terminalMatchingCharacterInSet:(id)arg1 ;
+(id)terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingCharacterInString:(id)arg1 ;
+(id)terminalMatchingAnyInteger;
+(id)terminalMatchingAnyDouble;
+(id)terminalMatchingSequenceOfCharactersInSet:(id)arg1 ;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(unsigned)_minimumLength;
-(char)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(id)_label;
-(id)characterSet;
@end

