/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAUIAppPunchOut, NSString;

@interface SAUSSection : SADomainObject

@property (nonatomic,copy) NSArray * cardResults; 
@property (nonatomic,copy) NSArray * genericResults; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * sectionTitle; 
+(id)section;
+(id)sectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)cardResults;
-(void)setCardResults:(NSArray *)arg1 ;
-(NSArray *)genericResults;
-(void)setGenericResults:(NSArray *)arg1 ;
@end

