/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAHAFilter.h>

@class NSArray;

@interface SAHAIdentifierListFilter : SAHAFilter

@property (nonatomic,copy) NSArray * identifiers; 
+(id)identifierListFilter;
+(id)identifierListFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
@end

