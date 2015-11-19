/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/MSXPCService.h>

@interface MSAutosave : MSXPCService
+(id)autosave;
-(void)autosaveMessageData:(id)arg1 withIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(char)hasAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)_timeout;
@end

