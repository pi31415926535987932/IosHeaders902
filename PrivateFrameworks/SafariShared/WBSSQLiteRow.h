/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSSQLiteRow : NSObject {

	sqlite3_stmtRef _handle;

}
-(id)stringAtIndex:(unsigned)arg1 ;
-(int)intAtIndex:(unsigned)arg1 ;
-(double)doubleAtIndex:(unsigned)arg1 ;
-(long long)int64AtIndex:(unsigned)arg1 ;
-(RawData*)uncopiedRawDataAtIndex:(unsigned)arg1 ;
-(id)uncopiedDataAtIndex:(unsigned)arg1 ;
-(char)boolAtIndex:(unsigned)arg1 ;
-(id)debugDictionaryRepresentationWithStatement:(id)arg1 ;
-(char)_isNullAtIndex:(unsigned)arg1 ;
-(id)initWithCurrentRowOfEnumerator:(id)arg1 ;
-(id)dataAtIndex:(unsigned)arg1 ;
@end

