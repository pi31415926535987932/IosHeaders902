/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Tools/suggest_tool
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableDictionary;

@interface SGZipFileReader : NSEnumerator {

	void* _file;
	NSMutableDictionary* _cursors;
	char _haveSeenFirstFile;

}
-(void)gotoCursor:(id)arg1 ;
-(id)readFile:(id)arg1 ;
-(id)initWithResourceFilename:(id)arg1 ;
-(id)readCurrentFile;
-(char)seekToPath:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(id)nextObject;
-(id)initWithPath:(id)arg1 ;
-(id)cursor;
@end

