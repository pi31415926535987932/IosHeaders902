/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <assistantd/ADSADOCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSString, SADomainObject;

@interface SADomainObjectCancel : SABaseClientBoundCommand <ADSADOCommand, SADomainObjectCommand>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SADomainObject * identifier; 
+(id)domainObjectCancel;
+(id)domainObjectCancelWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)domainFromSADObject;
-(id)expectedResponseClassName;
-(SADomainObject *)identifier;
-(void)setIdentifier:(SADomainObject *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
@end

