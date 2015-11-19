/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {

	NSMutableArray* mRules;
	EDReferenceCollection* mRanges;
	BOOL mApplyToDate;

}
+(id)conditionalFormatting;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)rangeCount;
-(id)rangeAtIndex:(unsigned)arg1 ;
-(void)addRange:(id)arg1 ;
-(unsigned)ruleCount;
-(id)ruleAtIndex:(unsigned)arg1 ;
-(void)addRule:(id)arg1 ;
-(id)rules;
-(BOOL)isApplyToDate;
@end
