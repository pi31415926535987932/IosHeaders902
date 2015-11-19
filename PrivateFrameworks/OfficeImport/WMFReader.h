/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFReader.h>

@class WMFPlayer, NSString;

@interface WMFReader : NSObject <MFReader> {

	int m_recordsRead;
	WMFPlayer* m_player;
	unsigned m_length;
	const char* m_pBuffer;
	unsigned m_cursor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(oneway void)release;
-(int)play:(id)arg1 ;
-(int)playHeaders;
-(int)playRecord;
-(int)checkBytesAvailable:(unsigned)arg1 ;
-(int)moveDataCursor:(unsigned)arg1 ;
-(id)initWithWMFPlayer:(id)arg1 ;
@end

