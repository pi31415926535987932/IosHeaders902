/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString, NSSet;

@interface MFCoreRecentsCorecipientSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	NSSet* _otherRecipients;
	unsigned _implicitGroupThreshold;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 otherRecipients:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned)arg7 ;
-(void)dealloc;
-(void)main;
@end

