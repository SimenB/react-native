/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ScrollViewProps.h"

#include <react/featureflags/ReactNativeFeatureFlags.h>
#include <react/renderer/components/scrollview/conversions.h>
#include <react/renderer/core/graphicsConversions.h>
#include <react/renderer/debug/debugStringConvertibleUtils.h>

#include <react/renderer/core/propsConversions.h>

namespace facebook::react {

ScrollViewProps::ScrollViewProps(
    const PropsParserContext& context,
    const ScrollViewProps& sourceProps,
    const RawProps& rawProps)
    : ViewProps(context, sourceProps, rawProps),
      alwaysBounceHorizontal(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.alwaysBounceHorizontal
              : convertRawProp(
                    context,
                    rawProps,
                    "alwaysBounceHorizontal",
                    sourceProps.alwaysBounceHorizontal,
                    {})),
      alwaysBounceVertical(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.alwaysBounceVertical
              : convertRawProp(
                    context,
                    rawProps,
                    "alwaysBounceVertical",
                    sourceProps.alwaysBounceVertical,
                    {})),
      bounces(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.bounces
              : convertRawProp(
                    context,
                    rawProps,
                    "bounces",
                    sourceProps.bounces,
                    true)),
      bouncesZoom(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.bouncesZoom
              : convertRawProp(
                    context,
                    rawProps,
                    "bouncesZoom",
                    sourceProps.bouncesZoom,
                    true)),
      canCancelContentTouches(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.canCancelContentTouches
              : convertRawProp(
                    context,
                    rawProps,
                    "canCancelContentTouches",
                    sourceProps.canCancelContentTouches,
                    true)),
      centerContent(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.centerContent
              : convertRawProp(
                    context,
                    rawProps,
                    "centerContent",
                    sourceProps.centerContent,
                    {})),
      automaticallyAdjustContentInsets(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.automaticallyAdjustContentInsets
              : convertRawProp(
                    context,
                    rawProps,
                    "automaticallyAdjustContentInsets",
                    sourceProps.automaticallyAdjustContentInsets,
                    {})),
      automaticallyAdjustsScrollIndicatorInsets(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.automaticallyAdjustsScrollIndicatorInsets
              : convertRawProp(
                    context,
                    rawProps,
                    "automaticallyAdjustsScrollIndicatorInsets",
                    sourceProps.automaticallyAdjustsScrollIndicatorInsets,
                    true)),
      automaticallyAdjustKeyboardInsets(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.automaticallyAdjustKeyboardInsets
              : convertRawProp(
                    context,
                    rawProps,
                    "automaticallyAdjustKeyboardInsets",
                    sourceProps.automaticallyAdjustKeyboardInsets,
                    false)),
      decelerationRate(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.decelerationRate
              : convertRawProp(
                    context,
                    rawProps,
                    "decelerationRate",
                    sourceProps.decelerationRate,
                    (Float)0.998)),
      endDraggingSensitivityMultiplier(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.endDraggingSensitivityMultiplier
              : convertRawProp(
                    context,
                    rawProps,
                    "endDraggingSensitivityMultiplier",
                    sourceProps.endDraggingSensitivityMultiplier,
                    (Float)1)),
      directionalLockEnabled(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.directionalLockEnabled
              : convertRawProp(
                    context,
                    rawProps,
                    "directionalLockEnabled",
                    sourceProps.directionalLockEnabled,
                    {})),
      indicatorStyle(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.indicatorStyle
              : convertRawProp(
                    context,
                    rawProps,
                    "indicatorStyle",
                    sourceProps.indicatorStyle,
                    {})),
      keyboardDismissMode(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.keyboardDismissMode
              : convertRawProp(
                    context,
                    rawProps,
                    "keyboardDismissMode",
                    sourceProps.keyboardDismissMode,
                    {})),
      maintainVisibleContentPosition(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.maintainVisibleContentPosition
              : convertRawProp(
                    context,
                    rawProps,
                    "maintainVisibleContentPosition",
                    sourceProps.maintainVisibleContentPosition,
                    {})),
      maximumZoomScale(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.maximumZoomScale
              : convertRawProp(
                    context,
                    rawProps,
                    "maximumZoomScale",
                    sourceProps.maximumZoomScale,
                    (Float)1.0)),
      minimumZoomScale(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.minimumZoomScale
              : convertRawProp(
                    context,
                    rawProps,
                    "minimumZoomScale",
                    sourceProps.minimumZoomScale,
                    (Float)1.0)),
      scrollEnabled(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.scrollEnabled
              : convertRawProp(
                    context,
                    rawProps,
                    "scrollEnabled",
                    sourceProps.scrollEnabled,
                    true)),
      pagingEnabled(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.pagingEnabled
              : convertRawProp(
                    context,
                    rawProps,
                    "pagingEnabled",
                    sourceProps.pagingEnabled,
                    {})),
      pinchGestureEnabled(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.pinchGestureEnabled
              : convertRawProp(
                    context,
                    rawProps,
                    "pinchGestureEnabled",
                    sourceProps.pinchGestureEnabled,
                    true)),
      scrollsToTop(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.scrollsToTop
              : convertRawProp(
                    context,
                    rawProps,
                    "scrollsToTop",
                    sourceProps.scrollsToTop,
                    true)),
      showsHorizontalScrollIndicator(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.showsHorizontalScrollIndicator
              : convertRawProp(
                    context,
                    rawProps,
                    "showsHorizontalScrollIndicator",
                    sourceProps.showsHorizontalScrollIndicator,
                    true)),
      showsVerticalScrollIndicator(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.showsVerticalScrollIndicator
              : convertRawProp(
                    context,
                    rawProps,
                    "showsVerticalScrollIndicator",
                    sourceProps.showsVerticalScrollIndicator,
                    true)),
      persistentScrollbar(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.persistentScrollbar
              : convertRawProp(
                    context,
                    rawProps,
                    "persistentScrollbar",
                    sourceProps.persistentScrollbar,
                    true)),
      horizontal(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.horizontal
              : convertRawProp(
                    context,
                    rawProps,
                    "horizontal",
                    sourceProps.horizontal,
                    true)),
      scrollEventThrottle(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.scrollEventThrottle
              : convertRawProp(
                    context,
                    rawProps,
                    "scrollEventThrottle",
                    sourceProps.scrollEventThrottle,
                    {})),
      zoomScale(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.zoomScale
              : convertRawProp(
                    context,
                    rawProps,
                    "zoomScale",
                    sourceProps.zoomScale,
                    (Float)1.0)),
      contentInset(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.contentInset
              : convertRawProp(
                    context,
                    rawProps,
                    "contentInset",
                    sourceProps.contentInset,
                    {})),
      contentOffset(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.contentOffset
              : convertRawProp(
                    context,
                    rawProps,
                    "contentOffset",
                    sourceProps.contentOffset,
                    {})),
      scrollIndicatorInsets(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.scrollIndicatorInsets
              : convertRawProp(
                    context,
                    rawProps,
                    "scrollIndicatorInsets",
                    sourceProps.scrollIndicatorInsets,
                    {})),
      snapToInterval(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.snapToInterval
              : convertRawProp(
                    context,
                    rawProps,
                    "snapToInterval",
                    sourceProps.snapToInterval,
                    {})),
      snapToAlignment(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.snapToAlignment
              : convertRawProp(
                    context,
                    rawProps,
                    "snapToAlignment",
                    sourceProps.snapToAlignment,
                    {})),
      disableIntervalMomentum(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.disableIntervalMomentum
              : convertRawProp(
                    context,
                    rawProps,
                    "disableIntervalMomentum",
                    sourceProps.disableIntervalMomentum,
                    {})),
      snapToOffsets(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.snapToOffsets
              : convertRawProp(
                    context,
                    rawProps,
                    "snapToOffsets",
                    sourceProps.snapToOffsets,
                    {})),
      snapToStart(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.snapToStart
              : convertRawProp(
                    context,
                    rawProps,
                    "snapToStart",
                    sourceProps.snapToStart,
                    true)),
      snapToEnd(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.snapToEnd
              : convertRawProp(
                    context,
                    rawProps,
                    "snapToEnd",
                    sourceProps.snapToEnd,
                    true)),
      contentInsetAdjustmentBehavior(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.contentInsetAdjustmentBehavior
              : convertRawProp(
                    context,
                    rawProps,
                    "contentInsetAdjustmentBehavior",
                    sourceProps.contentInsetAdjustmentBehavior,
                    {ContentInsetAdjustmentBehavior::Never})),
      scrollToOverflowEnabled(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.scrollToOverflowEnabled
              : convertRawProp(
                    context,
                    rawProps,
                    "scrollToOverflowEnabled",
                    sourceProps.scrollToOverflowEnabled,
                    {})),
      isInvertedVirtualizedList(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.isInvertedVirtualizedList
              : convertRawProp(
                    context,
                    rawProps,
                    "isInvertedVirtualizedList",
                    sourceProps.isInvertedVirtualizedList,
                    {})),
      sendMomentumEvents(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.sendMomentumEvents
              : convertRawProp(
                    context,
                    rawProps,
                    "sendMomentumEvents",
                    sourceProps.sendMomentumEvents,
                    true)),
      nestedScrollEnabled(
          ReactNativeFeatureFlags::enableCppPropsIteratorSetter()
              ? sourceProps.nestedScrollEnabled
              : convertRawProp(
                    context,
                    rawProps,
                    "nestedScrollEnabled",
                    sourceProps.nestedScrollEnabled,
                    true))

{}

void ScrollViewProps::setProp(
    const PropsParserContext& context,
    RawPropsPropNameHash hash,
    const char* propName,
    const RawValue& value) {
  // All Props structs setProp methods must always, unconditionally,
  // call all super::setProp methods, since multiple structs may
  // reuse the same values.
  ViewProps::setProp(context, hash, propName, value);

  static auto defaults = ScrollViewProps{};

  switch (hash) {
    RAW_SET_PROP_SWITCH_CASE_BASIC(alwaysBounceHorizontal);
    RAW_SET_PROP_SWITCH_CASE_BASIC(alwaysBounceVertical);
    RAW_SET_PROP_SWITCH_CASE_BASIC(bounces);
    RAW_SET_PROP_SWITCH_CASE_BASIC(bouncesZoom);
    RAW_SET_PROP_SWITCH_CASE_BASIC(canCancelContentTouches);
    RAW_SET_PROP_SWITCH_CASE_BASIC(centerContent);
    RAW_SET_PROP_SWITCH_CASE_BASIC(automaticallyAdjustContentInsets);
    RAW_SET_PROP_SWITCH_CASE_BASIC(automaticallyAdjustsScrollIndicatorInsets);
    RAW_SET_PROP_SWITCH_CASE_BASIC(decelerationRate);
    RAW_SET_PROP_SWITCH_CASE_BASIC(directionalLockEnabled);
    RAW_SET_PROP_SWITCH_CASE_BASIC(indicatorStyle);
    RAW_SET_PROP_SWITCH_CASE_BASIC(keyboardDismissMode);
    RAW_SET_PROP_SWITCH_CASE_BASIC(maintainVisibleContentPosition);
    RAW_SET_PROP_SWITCH_CASE_BASIC(maximumZoomScale);
    RAW_SET_PROP_SWITCH_CASE_BASIC(minimumZoomScale);
    RAW_SET_PROP_SWITCH_CASE_BASIC(scrollEnabled);
    RAW_SET_PROP_SWITCH_CASE_BASIC(endDraggingSensitivityMultiplier);
    RAW_SET_PROP_SWITCH_CASE_BASIC(pagingEnabled);
    RAW_SET_PROP_SWITCH_CASE_BASIC(pinchGestureEnabled);
    RAW_SET_PROP_SWITCH_CASE_BASIC(scrollsToTop);
    RAW_SET_PROP_SWITCH_CASE_BASIC(showsHorizontalScrollIndicator);
    RAW_SET_PROP_SWITCH_CASE_BASIC(showsVerticalScrollIndicator);
    RAW_SET_PROP_SWITCH_CASE_BASIC(persistentScrollbar);
    RAW_SET_PROP_SWITCH_CASE_BASIC(horizontal);
    RAW_SET_PROP_SWITCH_CASE_BASIC(scrollEventThrottle);
    RAW_SET_PROP_SWITCH_CASE_BASIC(zoomScale);
    RAW_SET_PROP_SWITCH_CASE_BASIC(contentInset);
    RAW_SET_PROP_SWITCH_CASE_BASIC(contentOffset);
    RAW_SET_PROP_SWITCH_CASE_BASIC(scrollIndicatorInsets);
    RAW_SET_PROP_SWITCH_CASE_BASIC(snapToInterval);
    RAW_SET_PROP_SWITCH_CASE_BASIC(snapToAlignment);
    RAW_SET_PROP_SWITCH_CASE_BASIC(disableIntervalMomentum);
    RAW_SET_PROP_SWITCH_CASE_BASIC(snapToOffsets);
    RAW_SET_PROP_SWITCH_CASE_BASIC(snapToStart);
    RAW_SET_PROP_SWITCH_CASE_BASIC(snapToEnd);
    RAW_SET_PROP_SWITCH_CASE_BASIC(contentInsetAdjustmentBehavior);
    RAW_SET_PROP_SWITCH_CASE_BASIC(scrollToOverflowEnabled);
    RAW_SET_PROP_SWITCH_CASE_BASIC(isInvertedVirtualizedList);
    RAW_SET_PROP_SWITCH_CASE_BASIC(sendMomentumEvents);
    RAW_SET_PROP_SWITCH_CASE_BASIC(nestedScrollEnabled);
  }
}

#pragma mark - DebugStringConvertible

#if RN_DEBUG_STRING_CONVERTIBLE
SharedDebugStringConvertibleList ScrollViewProps::getDebugProps() const {
  auto defaultScrollViewProps = ScrollViewProps{};

  return ViewProps::getDebugProps() +
      SharedDebugStringConvertibleList{
          debugStringConvertibleItem(
              "alwaysBounceHorizontal",
              alwaysBounceHorizontal,
              defaultScrollViewProps.alwaysBounceHorizontal),
          debugStringConvertibleItem(
              "alwaysBounceVertical",
              alwaysBounceVertical,
              defaultScrollViewProps.alwaysBounceVertical),
          debugStringConvertibleItem(
              "bounces", bounces, defaultScrollViewProps.bounces),
          debugStringConvertibleItem(
              "bouncesZoom", bouncesZoom, defaultScrollViewProps.bouncesZoom),
          debugStringConvertibleItem(
              "canCancelContentTouches",
              canCancelContentTouches,
              defaultScrollViewProps.canCancelContentTouches),
          debugStringConvertibleItem(
              "centerContent",
              centerContent,
              defaultScrollViewProps.centerContent),
          debugStringConvertibleItem(
              "automaticallyAdjustContentInsets",
              automaticallyAdjustContentInsets,
              defaultScrollViewProps.automaticallyAdjustContentInsets),
          debugStringConvertibleItem(
              "automaticallyAdjustsScrollIndicatorInsets",
              automaticallyAdjustsScrollIndicatorInsets,
              defaultScrollViewProps.automaticallyAdjustsScrollIndicatorInsets),
          debugStringConvertibleItem(
              "decelerationRate",
              decelerationRate,
              defaultScrollViewProps.decelerationRate),
          debugStringConvertibleItem(
              "directionalLockEnabled",
              directionalLockEnabled,
              defaultScrollViewProps.directionalLockEnabled),
          debugStringConvertibleItem(
              "indicatorStyle",
              indicatorStyle,
              defaultScrollViewProps.indicatorStyle),
          debugStringConvertibleItem(
              "keyboardDismissMode",
              keyboardDismissMode,
              defaultScrollViewProps.keyboardDismissMode),
          debugStringConvertibleItem(
              "maintainVisibleContentPosition",
              maintainVisibleContentPosition,
              defaultScrollViewProps.maintainVisibleContentPosition),
          debugStringConvertibleItem(
              "maximumZoomScale",
              maximumZoomScale,
              defaultScrollViewProps.maximumZoomScale),
          debugStringConvertibleItem(
              "minimumZoomScale",
              minimumZoomScale,
              defaultScrollViewProps.minimumZoomScale),
          debugStringConvertibleItem(
              "scrollEnabled",
              scrollEnabled,
              defaultScrollViewProps.scrollEnabled),
          debugStringConvertibleItem(
              "pagingEnabled",
              pagingEnabled,
              defaultScrollViewProps.pagingEnabled),
          debugStringConvertibleItem(
              "pinchGestureEnabled",
              pinchGestureEnabled,
              defaultScrollViewProps.pinchGestureEnabled),
          debugStringConvertibleItem(
              "scrollsToTop",
              scrollsToTop,
              defaultScrollViewProps.scrollsToTop),
          debugStringConvertibleItem(
              "showsHorizontalScrollIndicator",
              showsHorizontalScrollIndicator,
              defaultScrollViewProps.showsHorizontalScrollIndicator),
          debugStringConvertibleItem(
              "showsVerticalScrollIndicator",
              showsVerticalScrollIndicator,
              defaultScrollViewProps.showsVerticalScrollIndicator),
          debugStringConvertibleItem(
              "persistentScrollbar",
              persistentScrollbar,
              defaultScrollViewProps.persistentScrollbar),
          debugStringConvertibleItem(
              "horizontal", horizontal, defaultScrollViewProps.horizontal),
          debugStringConvertibleItem(
              "scrollEventThrottle",
              scrollEventThrottle,
              defaultScrollViewProps.scrollEventThrottle),
          debugStringConvertibleItem(
              "zoomScale", zoomScale, defaultScrollViewProps.zoomScale),
          debugStringConvertibleItem(
              "contentInset",
              contentInset,
              defaultScrollViewProps.contentInset),
          debugStringConvertibleItem(
              "contentOffset",
              contentOffset,
              defaultScrollViewProps.contentOffset),
          debugStringConvertibleItem(
              "scrollIndicatorInsets",
              scrollIndicatorInsets,
              defaultScrollViewProps.scrollIndicatorInsets),
          debugStringConvertibleItem(
              "snapToInterval",
              snapToInterval,
              defaultScrollViewProps.snapToInterval),
          debugStringConvertibleItem(
              "snapToAlignment",
              snapToAlignment,
              defaultScrollViewProps.snapToAlignment),
          debugStringConvertibleItem(
              "disableIntervalMomentum",
              disableIntervalMomentum,
              defaultScrollViewProps.disableIntervalMomentum),
          debugStringConvertibleItem(
              "snapToStart", snapToStart, defaultScrollViewProps.snapToStart),
          debugStringConvertibleItem(
              "snapToEnd", snapToEnd, defaultScrollViewProps.snapToEnd),
          debugStringConvertibleItem(
              "isInvertedVirtualizedList",
              snapToEnd,
              defaultScrollViewProps.isInvertedVirtualizedList),
          debugStringConvertibleItem(
              "sendMomentumEvents",
              sendMomentumEvents,
              defaultScrollViewProps.sendMomentumEvents),
          debugStringConvertibleItem(
              "nestedScrollEnabled",
              nestedScrollEnabled,
              defaultScrollViewProps.nestedScrollEnabled)};
}
#endif

#ifdef RN_SERIALIZABLE_STATE

static folly::dynamic convertScrollViewMaintainVisibleContentPosition(
    const ScrollViewMaintainVisibleContentPosition& value) {
  folly::dynamic result = folly::dynamic::object();
  result["minIndexForVisible"] = value.minIndexForVisible;
  if (value.autoscrollToTopThreshold.has_value()) {
    result["autoscrollToTopThreshold"] = value.autoscrollToTopThreshold.value();
  }
  return result;
}

static folly::dynamic convertEdgeInsets(const EdgeInsets& edgeInsets) {
  folly::dynamic edgeInsetsResult = folly::dynamic::object();
  edgeInsetsResult["left"] = edgeInsets.left;
  edgeInsetsResult["top"] = edgeInsets.top;
  edgeInsetsResult["right"] = edgeInsets.right;
  edgeInsetsResult["bottom"] = edgeInsets.bottom;
  return edgeInsetsResult;
}

static folly::dynamic convertPoint(const Point& point) {
  folly::dynamic pointResult = folly::dynamic::object();
  pointResult["y"] = point.y;
  pointResult["x"] = point.x;
  return pointResult;
}

folly::dynamic ScrollViewProps::getDiffProps(const Props* prevProps) const {
  static const auto defaultProps = ScrollViewProps();
  const ScrollViewProps* oldProps = prevProps == nullptr
      ? &defaultProps
      : static_cast<const ScrollViewProps*>(prevProps);

  folly::dynamic result = ViewProps::getDiffProps(oldProps);

  if (alwaysBounceHorizontal != oldProps->alwaysBounceHorizontal) {
    result["alwaysBounceHorizontal"] = alwaysBounceHorizontal;
  }

  if (alwaysBounceVertical != oldProps->alwaysBounceVertical) {
    result["alwaysBounceVertical"] = alwaysBounceVertical;
  }

  if (bounces != oldProps->bounces) {
    result["bounces"] = bounces;
  }

  if (bouncesZoom != oldProps->bouncesZoom) {
    result["bouncesZoom"] = bouncesZoom;
  }

  if (canCancelContentTouches != oldProps->canCancelContentTouches) {
    result["canCancelContentTouches"] = canCancelContentTouches;
  }

  if (centerContent != oldProps->centerContent) {
    result["centerContent"] = centerContent;
  }

  if (automaticallyAdjustContentInsets !=
      oldProps->automaticallyAdjustContentInsets) {
    result["automaticallyAdjustContentInsets"] =
        automaticallyAdjustContentInsets;
  }

  if (automaticallyAdjustsScrollIndicatorInsets !=
      oldProps->automaticallyAdjustsScrollIndicatorInsets) {
    result["automaticallyAdjustsScrollIndicatorInsets"] =
        automaticallyAdjustsScrollIndicatorInsets;
  }

  if (automaticallyAdjustKeyboardInsets !=
      oldProps->automaticallyAdjustKeyboardInsets) {
    result["automaticallyAdjustKeyboardInsets"] =
        automaticallyAdjustKeyboardInsets;
  }

  if (decelerationRate != oldProps->decelerationRate) {
    result["decelerationRate"] = decelerationRate;
  }

  if (endDraggingSensitivityMultiplier !=
      oldProps->endDraggingSensitivityMultiplier) {
    result["endDraggingSensitivityMultiplier"] =
        endDraggingSensitivityMultiplier;
  }

  if (directionalLockEnabled != oldProps->directionalLockEnabled) {
    result["directionalLockEnabled"] = directionalLockEnabled;
  }

  if (indicatorStyle != oldProps->indicatorStyle) {
    switch (indicatorStyle) {
      case ScrollViewIndicatorStyle::Default:
        result["indicatorStyle"] = "default";
        break;
      case ScrollViewIndicatorStyle::Black:
        result["indicatorStyle"] = "black";
        break;
      case ScrollViewIndicatorStyle::White:
        result["indicatorStyle"] = "white";
        break;
    }
  }

  if (keyboardDismissMode != oldProps->keyboardDismissMode) {
    switch (keyboardDismissMode) {
      case ScrollViewKeyboardDismissMode::None:
        result["keyboardDismissMode"] = "none";
        break;
      case ScrollViewKeyboardDismissMode::OnDrag:
        result["keyboardDismissMode"] = "on-drag";
        break;
      case ScrollViewKeyboardDismissMode::Interactive:
        result["keyboardDismissMode"] = "interactive";
        break;
    }
  }

  if (maintainVisibleContentPosition !=
      oldProps->maintainVisibleContentPosition) {
    if (maintainVisibleContentPosition.has_value()) {
      result["maintainVisibleContentPosition"] =
          convertScrollViewMaintainVisibleContentPosition(
              maintainVisibleContentPosition.value());
    } else {
      result["maintainVisibleContentPosition"] = folly::dynamic(nullptr);
    }
  }

  if (maximumZoomScale != oldProps->maximumZoomScale) {
    result["maximumZoomScale"] = maximumZoomScale;
  }

  if (minimumZoomScale != oldProps->minimumZoomScale) {
    result["minimumZoomScale"] = minimumZoomScale;
  }

  if (scrollEnabled != oldProps->scrollEnabled) {
    result["scrollEnabled"] = scrollEnabled;
  }

  if (pagingEnabled != oldProps->pagingEnabled) {
    result["pagingEnabled"] = pagingEnabled;
  }

  if (pinchGestureEnabled != oldProps->pinchGestureEnabled) {
    result["pinchGestureEnabled"] = pinchGestureEnabled;
  }

  if (scrollsToTop != oldProps->scrollsToTop) {
    result["scrollsToTop"] = scrollsToTop;
  }

  if (showsHorizontalScrollIndicator !=
      oldProps->showsHorizontalScrollIndicator) {
    result["showsHorizontalScrollIndicator"] = showsHorizontalScrollIndicator;
  }

  if (showsVerticalScrollIndicator != oldProps->showsVerticalScrollIndicator) {
    result["showsVerticalScrollIndicator"] = showsVerticalScrollIndicator;
  }

  if (persistentScrollbar != oldProps->persistentScrollbar) {
    result["persistentScrollbar"] = persistentScrollbar;
  }

  if (horizontal != oldProps->horizontal) {
    result["horizontal"] = horizontal;
  }

  if (scrollEventThrottle != oldProps->scrollEventThrottle) {
    result["scrollEventThrottle"] = scrollEventThrottle;
  }

  if (zoomScale != oldProps->zoomScale) {
    result["zoomScale"] = zoomScale;
  }

  if (contentInset != oldProps->contentInset) {
    result["contentInset"] = convertEdgeInsets(contentInset);
  }

  if (contentOffset != oldProps->contentOffset) {
    result["contentOffset"] = convertPoint(contentOffset);
  }

  if (scrollIndicatorInsets != oldProps->scrollIndicatorInsets) {
    result["scrollIndicatorInsets"] = convertEdgeInsets(scrollIndicatorInsets);
  }

  if (snapToInterval != oldProps->snapToInterval) {
    result["snapToInterval"] = snapToInterval;
  }

  if (snapToAlignment != oldProps->snapToAlignment) {
    switch (snapToAlignment) {
      case ScrollViewSnapToAlignment::Start:
        result["snapToAlignment"] = "start";
        break;
      case ScrollViewSnapToAlignment::Center:
        result["snapToAlignment"] = "center";
        break;
      case ScrollViewSnapToAlignment::End:
        result["snapToAlignment"] = "end";
        break;
    }
  }

  if (disableIntervalMomentum != oldProps->disableIntervalMomentum) {
    result["disableIntervalMomentum"] = disableIntervalMomentum;
  }

  if (snapToOffsets != oldProps->snapToOffsets) {
    auto snapToOffsetsArray = folly::dynamic::array();
    for (const auto& snapToOffset : snapToOffsets) {
      snapToOffsetsArray.push_back(snapToOffset);
    }
    result["snapToOffsets"] = snapToOffsetsArray;
  }

  if (snapToStart != oldProps->snapToStart) {
    result["snapToStart"] = snapToStart;
  }

  if (snapToEnd != oldProps->snapToEnd) {
    result["snapToEnd"] = snapToEnd;
  }

  if (contentInsetAdjustmentBehavior !=
      oldProps->contentInsetAdjustmentBehavior) {
    switch (contentInsetAdjustmentBehavior) {
      case ContentInsetAdjustmentBehavior::Never:
        result["contentInsetAdjustmentBehavior"] = "never";
        break;
      case ContentInsetAdjustmentBehavior::Automatic:
        result["contentInsetAdjustmentBehavior"] = "automatic";
        break;
      case ContentInsetAdjustmentBehavior::ScrollableAxes:
        result["contentInsetAdjustmentBehavior"] = "scrollableAxes";
        break;
      case ContentInsetAdjustmentBehavior::Always:
        result["contentInsetAdjustmentBehavior"] = "always";
        break;
    }
  }

  if (scrollToOverflowEnabled != oldProps->scrollToOverflowEnabled) {
    result["scrollToOverflowEnabled"] = scrollToOverflowEnabled;
  }

  if (isInvertedVirtualizedList != oldProps->isInvertedVirtualizedList) {
    result["isInvertedVirtualizedList"] = isInvertedVirtualizedList;
  }

  if (sendMomentumEvents != oldProps->sendMomentumEvents) {
    result["sendMomentumEvents"] = sendMomentumEvents;
  }

  if (nestedScrollEnabled != oldProps->nestedScrollEnabled) {
    result["nestedScrollEnabled"] = nestedScrollEnabled;
  }

  return result;
}

#endif

} // namespace facebook::react
