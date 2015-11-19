/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class TDRenditionKeySpec, TDRenditionType, TDThemeConstant, NSString, NSDate, NSNumber, NSSet, TDNamedElement, TDSchemaPartDefinition;

@interface TDElementProduction : NSManagedObject

@property (nonatomic,retain) TDRenditionKeySpec * baseKeySpec; 
@property (nonatomic,retain) TDRenditionType * renditionType; 
@property (nonatomic,retain) TDThemeConstant * renditionSubtype; 
@property (nonatomic,retain) TDThemeConstant * zeroCodeArtworkInfo; 
@property (nonatomic,retain) NSString * comment; 
@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (nonatomic,retain) NSNumber * isExcludedFromFilter; 
@property (nonatomic,retain) TDThemeConstant * artworkDraftType; 
@property (nonatomic,retain) NSSet * renditions; 
@property (nonatomic,retain) NSSet * tags; 
@property (nonatomic,retain) NSString * universalTypeIdentifier; 
@property (assign,nonatomic) char makeOpaqueIfPossible; 
@property (nonatomic,retain) TDNamedElement * name; 
@property (nonatomic,retain) TDSchemaPartDefinition * partDefinition; 
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(char)arg2 ;
-(id)relativePath;
@end
