/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {

	NSString* mTo;
	NSString* mFrom;
	NSString* mBy;
	char mHasCalcMode;
	int mCalcMode;
	char mHasValueType;
	int mValueType;

}
-(void)dealloc;
-(id)init;
-(int)valueType;
-(id)from;
-(id)to;
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(void)setValueType:(int)arg1 ;
-(id)by;
-(void)setBy:(id)arg1 ;
-(char)hasCalcMode;
-(int)calcMode;
-(void)setCalcMode:(int)arg1 ;
-(char)hasValueType;
@end

