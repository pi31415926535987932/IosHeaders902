/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANodeIntent : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * matchingSpans; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * privacyPolicy; 
@property (nonatomic,retain) id<SAAceSerializable> value; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeIntent;
+(id)nodeIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_tccAccessInfoForAppID:(id)arg1 ;
-(id)ad_filteredDictionaryWithAppID:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id<SAAceSerializable>)value;
-(void)setValue:(id<SAAceSerializable>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)privacyPolicy;
-(NSArray *)matchingSpans;
-(void)setMatchingSpans:(NSArray *)arg1 ;
-(void)setPrivacyPolicy:(NSArray *)arg1 ;
@end

