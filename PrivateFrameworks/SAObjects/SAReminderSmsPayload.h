/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString, NSArray;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * recipients; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)smsPayload;
+(id)smsPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

