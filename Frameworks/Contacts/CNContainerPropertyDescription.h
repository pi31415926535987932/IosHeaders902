/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:34 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSString;

@interface CNContainerPropertyDescription : NSObject

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,readonly) char isWritable; 
@property (nonatomic,readonly) Class valueClass; 
-(Class)valueClass;
-(char)isValidValue:(id)arg1 error:(id*)arg2 ;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(int)abPropertyID;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(char)isConvertibleABValue:(void*)arg1 ;
-(void*)ABValueForABSource:(void*)arg1 ;
-(char)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
-(NSString *)key;
-(char)isWritable;
@end

