/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKSecureElementConsistencyCheckerDelegate <NSObject>
@required
-(id)secureElementCards;
-(id)paymentApplications;
-(id)paymentPasses;
-(id)secureElementApplets;
-(void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(char)arg2;
-(void)deleteCardsWithAIDs:(id)arg1;
-(char)synchronizeWithTSM;
-(void)didDownloadPaymentPass:(id)arg1;

@end

