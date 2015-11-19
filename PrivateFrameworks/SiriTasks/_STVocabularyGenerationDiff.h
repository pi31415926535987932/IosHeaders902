/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, NSArray, NSString;

@interface _STVocabularyGenerationDiff : NSObject {

	char _isFullReset;
	NSSet* _deletedSiriIDs;
	NSArray* _updatedVocabularyItems;
	int _countOfVocabularyItemsAfterApplying;
	NSString* _intentSlotName;
	NSString* _appBundleID;

}

@property (nonatomic,copy) NSSet * deletedSiriIDs;                                 //@synthesize deletedSiriIDs=_deletedSiriIDs - In the implementation block
@property (nonatomic,copy) NSArray * updatedVocabularyItems;                       //@synthesize updatedVocabularyItems=_updatedVocabularyItems - In the implementation block
@property (assign,nonatomic) int countOfVocabularyItemsAfterApplying;              //@synthesize countOfVocabularyItemsAfterApplying=_countOfVocabularyItemsAfterApplying - In the implementation block
@property (assign,nonatomic) char isFullReset;                                     //@synthesize isFullReset=_isFullReset - In the implementation block
@property (nonatomic,copy) NSString * intentSlotName;                              //@synthesize intentSlotName=_intentSlotName - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                                 //@synthesize appBundleID=_appBundleID - In the implementation block
-(char)hasChanges;
-(id)description;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(NSString *)appBundleID;
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setIsFullReset:(char)arg1 ;
-(void)setCountOfVocabularyItemsAfterApplying:(int)arg1 ;
-(void)setUpdatedVocabularyItems:(NSArray *)arg1 ;
-(void)setDeletedSiriIDs:(NSSet *)arg1 ;
-(char)isFullReset;
-(NSSet *)deletedSiriIDs;
-(NSArray *)updatedVocabularyItems;
-(int)countOfVocabularyItemsAfterApplying;
@end
