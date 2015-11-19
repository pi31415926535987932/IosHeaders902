/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUObjectGraph.h>
#import <libobjc.A.dylib/VMUCommonGraphInterface.h>

@class VMUClassInfoMap, NSMutableArray, NSArray, NSString;

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface> {

	int _pid;
	unsigned _kernPageSize;
	unsigned long long _machAbsolute;
	/*^block*/id _regionProvider;
	NSMutableArray* _regions;
	unsigned _regionCount;
	NSArray* _zoneNames;
	NSString* _procDescription;
	NSString* _procName;

}

@property (nonatomic,copy) NSString * toolHeaderDescription; 
@property (nonatomic,copy) NSString * processName; 
@property (assign,nonatomic) unsigned long long snapshotMachTime;              //@synthesize machAbsolute=_machAbsolute - In the implementation block
@property (nonatomic,readonly) char is64bit; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid;                                        //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned vmPageSize;                            //@synthesize kernPageSize=_kernPageSize - In the implementation block
@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses; 
@property (nonatomic,readonly) unsigned zoneCount; 
@property (nonatomic,readonly) unsigned nodeCount; 
@property (nonatomic,readonly) unsigned nodeNamespaceSize; 
@property (nonatomic,readonly) unsigned regionCount;                           //@synthesize regionCount=_regionCount - In the implementation block
-(void)dealloc;
-(NSString *)processName;
-(char)is64bit;
-(VMUClassInfoMap *)realizedClasses;
-(unsigned)zoneCount;
-(id)zoneNameForIndex:(unsigned)arg1 ;
-(unsigned)vmPageSize;
-(unsigned)enumerateRegionsWithBlock:(/*^block*/id)arg1 ;
-(void)internalizeNodes;
-(id)initWithArchived:(id)arg1 options:(unsigned)arg2 ;
-(void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned)arg2 ;
-(id)labelForNode:(unsigned)arg1 ;
-(unsigned)regionCount;
-(id)initWithNodes:(unsigned)arg1 pid:(int)arg2 zoneNames:(id)arg3 classInfoMap:(id)arg4 regionCount:(unsigned)arg5 nodeProvider:(/*^block*/id)arg6 regionProvider:(/*^block*/id)arg7 ;
-(NSString *)toolHeaderDescription;
-(void)setToolHeaderDescription:(NSString *)arg1 ;
-(unsigned)activeRegionCount;
-(unsigned long long)snapshotMachTime;
-(void)setSnapshotMachTime:(unsigned long long)arg1 ;
-(int)pid;
-(void)setProcessName:(NSString *)arg1 ;
@end

