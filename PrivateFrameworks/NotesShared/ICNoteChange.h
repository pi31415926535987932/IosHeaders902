/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class ICFolder, NSNumber, NSMutableSet;

@interface ICNoteChange : NSManagedObject

@property (nonatomic,retain) ICFolder * folder; 
@property (nonatomic,retain) NSNumber * changeType; 
@property (nonatomic,retain) NSMutableSet * noteIdentifiers; 
@property (nonatomic,retain) NSMutableSet * legacyNoteIntegerIds; 
@end

