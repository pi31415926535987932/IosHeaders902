/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SALCMAddContentToWatchList : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * contentIdentifiers; 
+(id)addContentToWatchList;
+(id)addContentToWatchListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_ad_OTTRequestRepresentation;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)contentIdentifiers;
-(void)setContentIdentifiers:(NSArray *)arg1 ;
@end

