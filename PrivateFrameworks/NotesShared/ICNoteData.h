/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, ICNote;

@interface ICNoteData : NSManagedObject {

	char needsToBeSaved;
	char settingNoteData;

}

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) ICNote * note; 
@property (assign) char needsToBeSaved; 
@property (assign,getter=isSettingNoteData,nonatomic) char settingNoteData; 
-(void)saveNoteDataIfNeeded;
-(char)needsToBeSaved;
-(char)isSettingNoteData;
-(void)setSettingNoteData:(char)arg1 ;
-(void)setNeedsToBeSaved:(char)arg1 ;
-(void)willSave;
-(void)willAccessValueForKey:(id)arg1 ;
@end

