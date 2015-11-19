/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, TDSchemaCategory, NSSet;

@interface TDSchemaDefinition : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (assign) char published; 
@property (nonatomic,retain) TDSchemaCategory * category; 
@property (nonatomic,retain) NSSet * parts; 
+(const SCD_Struct_TD2*)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2 ;
+(unsigned)elementDefinitionCountWithSchema:(id)arg1 ;
+(const SCD_Struct_TD2*)sortedElementDefinitionAtIndex:(unsigned)arg1 withSchema:(id)arg2 ;
-(id)displayName;
-(id)previewImage;
@end

