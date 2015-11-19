/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCFSEventsDelegate.h>
#import <libobjc.A.dylib/BRCFileCoordinationReading.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class BRCCountedSet, BRCRelativePath, BRCMinHeap, NSObject, NSString;

@interface BRCFSReader : BRCFSSchedulerBase <BRCModule, BRCFSEventsDelegate, BRCFileCoordinationReading> {

	BRCCountedSet* _coordinatedReaders;
	char _readerCountReachedMax;
	BRCRelativePath* _currentScan;
	BRCMinHeap* _lostHeap;
	NSObject*<OS_dispatch_queue> _lostScanQueue;
	NSObject*<OS_dispatch_source> _lostScanSource;
	NSObject*<OS_dispatch_source> _lostScanDelay;
	char _resumed;
	NSObject*<OS_dispatch_group> _lostScanGroup;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> lostScanGroup;              //@synthesize lostScanGroup=_lostScanGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char isCancelled; 
-(void)_close;
-(void)cancel;
-(void)dealloc;
-(void)reset;
-(void)suspend;
-(void)resume;
-(id)initWithAccountSession:(id)arg1 ;
-(void)_schedule;
-(char)_canRetryThrottleID:(long long)arg1 zone:(id)arg2 ;
-(char)_scheduleOne:(id)arg1 ;
-(char)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id*)arg4 ;
-(void)unscheduleContainerForLostScan:(id)arg1 ;
-(void)createThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 ;
-(void)readUnderCoordinationAtURL:(id)arg1 ;
-(void)didChangeLostScanStatusForContainer:(id)arg1 ;
-(char)startReadCoordinationInZone:(id)arg1 ;
-(void)endReadCoordinationInZone:(id)arg1 ;
-(void)scanContainerDocumentsIfNeeded:(id)arg1 ;
-(unsigned)_readCoordinationCount;
-(void)_createOrRetryThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 throttle:(id)arg4 hasBeenTried:(char)arg5 ;
-(void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 ;
-(void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2 ;
-(char)readUnderCoordinationWithLookup:(id)arg1 ;
-(id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1 ;
-(void)fseventAtPath:(id)arg1 flags:(unsigned long)arg2 unresolvedLastPathComponent:(id)arg3 ;
-(void)fseventOnRoot:(id)arg1 flags:(unsigned long)arg2 ;
-(void)fseventOnSharedRoot:(id)arg1 flags:(unsigned long)arg2 ;
-(void)fseventOnContainer:(id)arg1 flags:(unsigned long)arg2 ;
-(void)fseventInsideSharedEnclosure:(id)arg1 flags:(unsigned long)arg2 ;
-(void)_cancelScan;
-(void)fseventOnAlias:(id)arg1 flags:(unsigned long)arg2 lookup:(id)arg3 ;
-(void)fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 lookup:(id)arg3 unresolvedLastPathComponent:(id)arg4 ;
-(void)fseventOnDirectory:(id)arg1 flags:(unsigned long)arg2 lookup:(id)arg3 ;
-(id)itemForCreatedDocumentsDirectory:(id)arg1 container:(id)arg2 path:(id)arg3 ;
-(void)_fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 item:(id)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5 ;
-(void)fseventAtPath:(id)arg1 flags:(unsigned long)arg2 ;
-(void)_delayThrottleID:(long long)arg1 zone:(id)arg2 by:(double)arg3 ;
-(void)_fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 item:(id)arg3 lookup:(id)arg4 ;
-(void)_processDeadItem:(id)arg1 ;
-(void)_resolveDocumentID:(unsigned)arg1 zone:(id)arg2 ;
-(void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2 ;
-(void)fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 lookup:(id)arg3 ;
-(void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3 ;
-(void)_didResolvedDocumentID:(unsigned)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3 ;
-(void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3 ;
-(void)_slowScanDirectoryAtPath:(id)arg1 ;
-(void)_continueScan:(id)arg1 ;
-(void)_startScan:(id)arg1 ;
-(void)_processLostItem:(id)arg1 ;
-(void)_lostScanSchedule;
-(NSObject*<OS_dispatch_group>)lostScanGroup;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

